/*
 * Copyright 2020 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/* This file is automatically generated using bindtool */

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/uhd/usrp_source.h>
// pydoc.h is automatically generated in the build directory
#include <usrp_source_pydoc.h>

void bind_usrp_source(py::module& m)
{

    using usrp_source = ::gr::uhd::usrp_source;


    py::class_<usrp_source, gr::uhd::usrp_block, std::shared_ptr<usrp_source>>(
        m, "usrp_source", D(usrp_source))

        .def(py::init(&usrp_source::make),
             py::arg("device_addr"),
             py::arg("stream_args"),
             py::arg("issue_stream_cmd_on_start") = true,
             D(usrp_source, make))


        .def("set_start_time",
             &usrp_source::set_start_time,
             py::arg("time"),
             D(usrp_source, set_start_time))


        .def("issue_stream_cmd",
             &usrp_source::issue_stream_cmd,
             py::arg("cmd"),
             D(usrp_source, issue_stream_cmd))


        .def("set_recv_timeout",
             &usrp_source::set_recv_timeout,
             py::arg("timeout"),
             py::arg("one_packet") = true,
             D(usrp_source, set_recv_timeout))


        .def("get_usrp_info",
             &usrp_source::get_usrp_info,
             py::arg("chan") = 0,
             D(usrp_source, get_usrp_info))


        .def("get_lo_names",
             &usrp_source::get_lo_names,
             py::arg("chan") = 0,
             D(usrp_source, get_lo_names))


        .def("set_lo_source",
             &usrp_source::set_lo_source,
             py::arg("src"),
             py::arg("name"),
             py::arg("chan") = 0,
             D(usrp_source, set_lo_source))


        .def("get_lo_source",
             &usrp_source::get_lo_source,
             py::arg("name"),
             py::arg("chan") = 0,
             D(usrp_source, get_lo_source))


        .def("get_lo_sources",
             &usrp_source::get_lo_sources,
             py::arg("name"),
             py::arg("chan") = 0,
             D(usrp_source, get_lo_sources))


        .def("set_lo_export_enabled",
             &usrp_source::set_lo_export_enabled,
             py::arg("enabled"),
             py::arg("name"),
             py::arg("chan") = 0,
             D(usrp_source, set_lo_export_enabled))


        .def("get_lo_export_enabled",
             &usrp_source::get_lo_export_enabled,
             py::arg("name"),
             py::arg("chan") = 0,
             D(usrp_source, get_lo_export_enabled))


        .def("set_lo_freq",
             &usrp_source::set_lo_freq,
             py::arg("freq"),
             py::arg("name"),
             py::arg("chan") = 0,
             D(usrp_source, set_lo_freq))


        .def("get_lo_freq",
             &usrp_source::get_lo_freq,
             py::arg("name"),
             py::arg("chan") = 0,
             D(usrp_source, get_lo_freq))


        .def("get_lo_freq_range",
             &usrp_source::get_lo_freq_range,
             py::arg("name"),
             py::arg("chan") = 0,
             D(usrp_source, get_lo_freq_range))


        .def("set_auto_dc_offset",
             &usrp_source::set_auto_dc_offset,
             py::arg("enb"),
             py::arg("chan") = 0,
             D(usrp_source, set_auto_dc_offset))


        .def("set_dc_offset",
             &usrp_source::set_dc_offset,
             py::arg("offset"),
             py::arg("chan") = 0,
             D(usrp_source, set_dc_offset))


        .def("set_auto_iq_balance",
             &usrp_source::set_auto_iq_balance,
             py::arg("enb"),
             py::arg("chan") = 0,
             D(usrp_source, set_auto_iq_balance))


        .def("set_iq_balance",
             &usrp_source::set_iq_balance,
             py::arg("correction"),
             py::arg("chan") = 0,
             D(usrp_source, set_iq_balance))


        .def("set_rx_agc",
             &usrp_source::set_rx_agc,
             py::arg("enable"),
             py::arg("chan") = 0,
             D(usrp_source, set_rx_agc))


        .def("finite_acquisition",
             &usrp_source::finite_acquisition,
             py::arg("nsamps"),
             D(usrp_source, finite_acquisition))


        .def("finite_acquisition_v",
             &usrp_source::finite_acquisition_v,
             py::arg("nsamps"),
             D(usrp_source, finite_acquisition_v))

        ;
}